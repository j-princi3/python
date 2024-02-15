import json
from faker import Faker

def generate_fake_contact_info(num_entries):
    fake = Faker()
    contacts = []

    for _ in range(num_entries):
        contact = {
            'name': fake.name(),
            'phone_number': fake.phone_number(),
            'email': fake.email(),
            'address': fake.address()
        }
        contacts.append(contact)

    return contacts

# Generate 20 fake contact entries
fake_contacts = generate_fake_contact_info(20)

# Convert to JSON format
json_data = json.dumps(fake_contacts, indent=4)

# Print or save the JSON data as needed
print(json_data)
